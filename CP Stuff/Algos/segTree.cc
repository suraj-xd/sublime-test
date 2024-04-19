// UDEMY CP

// segment tree with point updates sum query

// -> [Sum query : Point updates : adding value to x node]

struct segmentTree
{
        
    vector<int> st;
    int n;
    void init(int _n){
        this->n = _n;
        st.resize(4*n,0);
    }
    void build(int start,int ending,int node,vector<int> &v){
        if(start==ending){
            st[node] = v[start];
            return;
        }
        int mid = start + (ending - start) / 2;
        // right subtree
        build(start,mid,2*node+1,v);
        // left subtree
        build(mid+1,ending,2*node+2,v);

        st[node] = st[node*2+1] + st[node*2+2];
    }
    void build(vector<int> &v){
        build(0,n-1,0,v);
    }

    int query(int start,int ending, int l,int r,int node){
      // non overlapping case
      if(start > r || ending < l) return 0;

      // complete overlap
      if(start>=l && ending<=r){
        return st[node];
      }

      // partial overlap
      int mid = start + (ending - start) / 2;
      int q1 = query(start,mid,l,r,2*node+1);
      int q2 = query(mid+1,ending,l,r,2*node+2);
      return q1 + q2;
    }
    int query(int l,int r){
       return query(0,n-1,l,r,0);
    }
    void update(int start,int ending,int node,int index,int value){
      if(start==ending){
        st[node] += value;
        return;
      }
      int mid  = start + (ending-start) / 2;

      if(index <= mid){
        // left subtree
        update(start,mid,2*node+1,index,value);
      }else{
        // right subtree
        update(mid+1,ending,2*node+2,index,value);
      }
      // update value while going back
      st[node] = st[node*2+1] + st[node*2+2];
      return; 
    }
    void update(int x,int y){
      update(0,n-1,0,x,y);
    }

};

// -> [Sum query : Point updates : replace value to x]

struct segmentTree
{
        
    vector<int> st;
    int n;
    void init(int _n){
        this->n = _n;
        st.resize(4*n,0);
    }
    void build(int start,int ending,int node,vector<int> &v){
        if(start==ending){
            st[node] = v[start];
            return;
        }
        int mid = start + (ending - start) / 2;
        // right subtree
        build(start,mid,2*node+1,v);
        // left subtree
        build(mid+1,ending,2*node+2,v);

        st[node] = st[node*2+1] + st[node*2+2];
    }
    void build(vector<int> &v){
        build(0,n-1,0,v);
    }

    int query(int start,int ending, int l,int r,int node){
      // non overlapping case
      if(start > r || ending < l) return 0;

      // complete overlap
      if(start>=l && ending<=r){
        return st[node];
      }

      // partial overlap
      int mid = start + (ending - start) / 2;
      int q1 = query(start,mid,l,r,2*node+1);
      int q2 = query(mid+1,ending,l,r,2*node+2);
      return q1 + q2;
    }
    int query(int l,int r){
       return query(0,n-1,l,r,0);
    }
    void update(int start,int ending,int node,int index,int value){
      if(start==ending){
        st[node] = value;
        return;
      }
      int mid  = start + (ending-start) / 2;

      if(index <= mid){
        // left subtree
        update(start,mid,2*node+1,index,value);
      }else{
        // right subtree
        update(mid+1,ending,2*node+2,index,value);
      }
      // update value while going back
      st[node] = st[node*2+1] + st[node*2+2];
      return; 
    }
    void update(int x,int y){
      update(0,n-1,0,x,y);
    }

};

// -> [Sum query : range updates : add values to existing segment]

struct segmentTree
{
        
    vector<int> st,lazy;
    int n;
    void init(int _n){
        this->n = _n;
        st.resize(4*n,0);
        lazy.resize(4*n,0);
    }
    void build(int start,int ending,int node,vector<int> &v){
        if(start==ending){
            st[node] = v[start];
            return;
        }
        int mid = start + (ending - start) / 2;
        // right subtree
        build(start,mid,2*node+1,v);
        // left subtree
        build(mid+1,ending,2*node+2,v);

        st[node] = st[node*2+1] + st[node*2+2];
    }
    void build(vector<int> &v){
        build(0,n-1,0,v);
    }

    int query(int start,int ending, int l,int r,int node){
      // non overlapping case
      if(start > r || ending < l) return 0;

      if(lazy[node]!=0){
        // peding updates
        st[node] += lazy[node] * (ending - start + 1);
        if(start!= ending){
          // propogate it downwards
          lazy[node*2+1] += lazy[node];
          lazy[node*2+2] += lazy[node];
        } 
        // clear the lazy value
        lazy[node] = 0;
      }

      // complete overlap
      if(start>=l && ending<=r){
        return st[node];
      }

      // partial overlap
      int mid = start + (ending - start) / 2;
      int q1 = query(start,mid,l,r,2*node+1);
      int q2 = query(mid+1,ending,l,r,2*node+2);
      return q1 + q2;
    }
    int query(int l,int r){
       return query(0,n-1,l,r,0);
    }
    void update(int start,int ending,int node,int l,int r,int value){
      // non overlapping case
      if(start > r || ending < l) return;

      if(lazy[node]!=0){
        // peding updates
        st[node] += lazy[node] * (ending - start + 1);
        if(start!= ending){
          // propogate it downwards
          lazy[node*2+1] += lazy[node];
          lazy[node*2+2] += lazy[node];
        } 
        // clear the lazy value
        lazy[node] = 0;
      }

      // complete overlap
      if(start>=l && ending<=r){
        st[node] += (ending - start + 1) * value;
        if(start!= ending){
          lazy[node*2+1] += value;
          lazy[node*2+2] += value;
        }
        return;
      }

      // partial overlap
      int mid = start + (ending- start) / 2;
      update(start,mid,node*2+1,l,r,value);
      update(mid+1,ending,node*2+2,l,r,value);
      st[node] = st[node*2+1] + st[node*2+2];
    }
    void update(int l,int r,int y){
      update(0,n-1,0,l,r,y);
    }

};

// -> [Sum query : range updates : replace values of existing x]
struct segmentTree
{
        
    vector<int> st,lazy;
    int n;
    void init(int _n){
        this->n = _n;
        st.resize(4*n,0);
        lazy.resize(4*n,0);
    }
    void build(int start,int ending,int node,vector<int> &v){
        if(start==ending){
            st[node] = v[start];
            return;
        }
        int mid = start + (ending - start) / 2;
        // right subtree
        build(start,mid,2*node+1,v);
        // left subtree
        build(mid+1,ending,2*node+2,v);

        st[node] = st[node*2+1] + st[node*2+2];
    }
    void build(vector<int> &v){
        build(0,n-1,0,v);
    }

    int query(int start,int ending, int l,int r,int node){
      // non overlapping case
      if(start > r || ending < l) return 0;

      if(lazy[node]!=0){
        // peding updates
        st[node] += lazy[node] * (ending - start + 1);
        if(start!= ending){
          // propogate it downwards
          lazy[node*2+1] = lazy[node];
          lazy[node*2+2] = lazy[node];
        } 
        // clear the lazy value
        lazy[node] = 0;
      }

      // complete overlap
      if(start>=l && ending<=r){
        return st[node];
      }

      // partial overlap
      int mid = start + (ending - start) / 2;
      int q1 = query(start,mid,l,r,2*node+1);
      int q2 = query(mid+1,ending,l,r,2*node+2);
      return q1 + q2;
    }
    int query(int l,int r){
       return query(0,n-1,l,r,0);
    }
    void update(int start,int ending,int node,int l,int r,int value){
      // non overlapping case
      if(start > r || ending < l) return;

      if(lazy[node]!=0){
        // peding updates
        st[node] = lazy[node] * (ending - start + 1);
        if(start!= ending){
          // propogate it downwards
          lazy[node*2+1] = lazy[node];
          lazy[node*2+2] = lazy[node];
        } 
        // clear the lazy value
        lazy[node] = 0;
      }

      // complete overlap
      if(start>=l && ending<=r){
        st[node] = (ending - start + 1) * value;
        if(start!= ending){
          lazy[node*2+1] = value;
          lazy[node*2+2] = value;
        }
        return;
      }

      // partial overlap
      int mid = start + (ending- start) / 2;
      update(start,mid,node*2+1,l,r,value);
      update(mid+1,ending,node*2+2,l,r,value);
      st[node] = st[node*2+1] + st[node*2+2];
    }
    void update(int l,int r,int y){
      update(0,n-1,0,l,r,y);
    }

};

// -> [Sum query : point updates : replace values of existing x]
// -> [Warning: INT_MAX for min, and INT_MIN for max]

struct segmentTree
{
        
    vector<int> st;
    int n;
    void init(int _n){
        this->n = _n;
        st.resize(4*n,0);
    }
    void build(int start,int ending,int node,vector<int> &v){
        if(start==ending){
            st[node] = v[start];
            return;
        }
        int mid = start + (ending - start) / 2;
        // right subtree
        build(start,mid,2*node+1,v);
        // left subtree
        build(mid+1,ending,2*node+2,v);

        st[node] = max(st[node*2+1] ,  st[node*2+2]);
    }
    void build(vector<int> &v){
        build(0,n-1,0,v);
    }

    int query(int start,int ending, int l,int r,int node){
      // non overlapping case
      if(start > r || ending < l) return INT_MIN;

      // complete overlap
      if(start>=l && ending<=r){
        return st[node];
      }

      // partial overlap
      int mid = start + (ending - start) / 2;
      int q1 = query(start,mid,l,r,2*node+1);
      int q2 = query(mid+1,ending,l,r,2*node+2);
      return max(q1 , q2);
    }
    int query(int l,int r){
       return query(0,n-1,l,r,0);
    }
    void update(int start,int ending,int node,int index,int value){
      if(start==ending){
        st[node] = value;
        return;
      }
      int mid  = start + (ending-start) / 2;

      if(index <= mid){
        // left subtree
        update(start,mid,2*node+1,index,value);
      }else{
        // right subtree
        update(mid+1,ending,2*node+2,index,value);
      }
      // update value while going back
      st[node] =max(st[node*2+1] , st[node*2+2]);
      return; 
    }
    void update(int x,int y){
      update(0,n-1,0,x,y);
    }
};


// -> [Sum query : range updates : replace values of existing x]
// -> [Warning: INT_MAX for min, and INT_MIN for max]

struct segmentTree
{
        
    vector<int> st,lazy;
    int n;
    void init(int _n){
        this->n = _n;
        st.resize(4*n,0);
        lazy.resize(4*n,0);
    }
    void build(int start,int ending,int node,vector<int> &v){
        if(start==ending){
            st[node] = v[start];
            return;
        }
        int mid = start + (ending - start) / 2;
        // right subtree
        build(start,mid,2*node+1,v);
        // left subtree
        build(mid+1,ending,2*node+2,v);

        st[node] = max (st[node*2+1],st[node*2+2]);
    }
    void build(vector<int> &v){
        build(0,n-1,0,v);
    }

    int query(int start,int ending, int l,int r,int node){
      // non overlapping case
      if(start > r || ending < l) return INT_MIN;

      if(lazy[node]!=0){
        // peding updates
        st[node] = max(st[node],lazy[node]);
        if(start!= ending){
          // propogate it downwards
          lazy[node*2+1] = max(lazy[node*2+1] , lazy[node]);
          lazy[node*2+2] = max(lazy[node*2+1] , lazy[node]);
        } 
        // clear the lazy value
        lazy[node] = INT_MIN;
      }

      // complete overlap
      if(start>=l && ending<=r){
        return st[node];
      }

      // partial overlap
      int mid = start + (ending - start) / 2;
      int q1 = query(start,mid,l,r,2*node+1);
      int q2 = query(mid+1,ending,l,r,2*node+2);
      return max(q1,q2);
    }
    int query(int l,int r){
       return query(0,n-1,l,r,0);
    }
    void update(int start,int ending,int node,int l,int r,int value){
      // non overlapping case
      if(start > r || ending < l) return;

      if(lazy[node]!=INT_MIN){
        // peding updates
        st[node] = max(st[node],lazy[node]);
        if(start!= ending){
          // propogate it downwards
          lazy[node*2+1] = max(lazy[node*2+1] , lazy[node]);
          lazy[node*2+2] = max(lazy[node*2+1] , lazy[node]);
        } 
        // clear the lazy value
        lazy[node] = INT_MIN;
      }

      // complete overlap
      if(start>=l && ending<=r){
        st[node] = max(st[node],value);
        if(start!= ending){
          lazy[node*2+1] =  max(value,lazy[node*2+1]);
          lazy[node*2+2] =  max(value,lazy[node*2+1]);
        }
        return;
      }

      // partial overlap
      int mid = start + (ending- start) / 2;
      update(start,mid,node*2+1,l,r,value);
      update(mid+1,ending,node*2+2,l,r,value);
      st[node] =  max(st[node*2+1] , st[node*2+2]);
    }
    void update(int l,int r,int y){
      update(0,n-1,0,l,r,y);
    }

};

// codechef problem based seg code
const int N = 2e5 + 10;
const int INF = 1e9 + 1000000;

int n, a[N], q;

struct seg
{
    int val;
    int val_min;
    int val_max;

    seg ()
    {
        val = 0;
        val_min = INF;
        val_max = 0;
    }

    seg operator + (seg & other)
    {
        seg res;
        res.val = min(val, other.val);
        res.val_max = max(val_max, other.val_max);
        res.val_min = min(val_min, other.val_min);
        return res;
    }
} st[4 * N];

int do_thing(int idx)
{
    if(a[idx] > a[idx + 1]) return 1;
    return 2;
}

int do_thing_check(int idx)
{
    int l = min(a[idx], a[idx + 1]);
    int r = max(a[idx], a[idx + 1]);
//    if(l == 2 && r == 7) cout << "hehe " << l + ((r - l + 1) / 2) << '\n';
    if(a[idx] > a[idx + 1]) return l + ((r - l + 1) / 2);
    else
    {
        if(l == r) return INF;
        return l + ((r - l) / 2);
    }
}

void build(int node, int l, int r)
{
    if(l == r)
    {
        st[node].val = do_thing(l);
        int tmp = do_thing_check(l);
        if(st[node].val == 2)
        {
            st[node].val_min = tmp;
            st[node].val_max = 0;
        }
        else
        {
            st[node].val_max = tmp;
            st[node].val_min = INF;
        }
        return;
    }
    int p1 = 2 * node + 1, p2 = 2 * node + 2, mid = l + r >> 1;
    build(p1, l, mid);
    build(p2, mid + 1, r);
    st[node] = st[p1] + st[p2];
}

void update(int node, int l, int r, int idx)
{
    if(l == r)
    {
        st[node].val = do_thing(idx);
        int tmp = do_thing_check(idx);
        if(st[node].val == 2)
        {
            st[node].val_min = tmp;
            st[node].val_max = 0;
        }
        else
        {
            st[node].val_max = tmp;
            st[node].val_min = INF;
        }
        return;
    }
    int p1 = 2 * node + 1, p2 = 2 * node + 2, mid = l + r >> 1;
    if(idx <= mid) update(p1, l, mid, idx);
    else update(p2, mid + 1, r, idx);
    st[node] = st[p1] + st[p2];
}

void Update(int idx)
{
    update(0, 1, n, idx);
}

int query(int node, int l, int r, int i, int j)
{
    if(l == i && r == j) return st[node].val;
    int p1 = 2 * node + 1, p2 = 2 * node + 2, mid = l + r >> 1;
    if(j <= mid) return query(p1, l, mid, i, j);
    else if(i > mid) return query(p2, mid + 1, r, i, j);
    return min(query(p1, l, mid, i, mid), query(p2, mid + 1, r, mid + 1, j));
}

int Query(int l, int r)
{
    return query(0, 1, n, l, r);
}

int query_min(int node, int l, int r, int i, int j)
{
    if(l == i && r == j) return st[node].val_min;
    int p1 = 2 * node + 1, p2 = 2 * node + 2, mid = l + r >> 1;
    if(j <= mid) return query_min(p1, l, mid, i, j);
    else if(i > mid) return query_min(p2, mid + 1, r, i, j);
    return min(query_min(p1, l, mid, i, mid), query_min(p2, mid + 1, r, mid + 1, j));
}

int Query_min(int l, int r)
{
    return query_min(0, 1, n, l, r);
}

int query_max(int node, int l, int r, int L, int R)
{
    if(l == L && r == R) return st[node].val_max;
    int p1 = 2 * node + 1, p2 = 2 * node + 2, mid = l + r >> 1;
    if(R <= mid) return query_max(p1, l, mid, L, R);
    else if(L > mid) return query_max(p2, mid + 1, r, L, R);
    return max(query_max(p1, l, mid, L, mid), query_max(p2, mid + 1, r, mid + 1, R));
}

int Query_max(int l, int r)
{
    return query_max(0, 1, n, l, r);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> q;
    for(int i = 1; i <= n; i++) cin >> a[i];
    a[0] = 0;
    a[n + 1] = INF;
    build(0, 1, n);
//    assert(Query_max(3, 3) <= Query_max(3, 4));
//    cout << Query_max(3, 3) << '\n';
    while(q--)
    {
        int type;
        cin >> type;
        if(type == 1)
        {
            int idx, val;
            cin >> idx >> val;
            a[idx] = val;
            Update(idx);
            if(idx > 1) Update(idx - 1);
        }
        else
        {
            int l, r;
            cin >> l >> r;
            if(l == r)
            {
                cout << "0\n";
                continue;
            }
            if(Query(l, r - 1) == 2) cout << "0\n";
            else
            {
                int tmp_mx = Query_max(l, r - 1);
                int tmp_mn = Query_min(l, r - 1);
//                cout << tmp_mx << ' ' << tmp_mn << '\n';
                if(tmp_mx <= tmp_mn) cout << tmp_mx << '\n';
                else cout << - 1 << '\n';
            }
        }
    }
    return 0;
}