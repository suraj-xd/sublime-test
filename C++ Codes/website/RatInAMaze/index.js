var arr = [[1, 1, 1, 1, 1], [1, 1, 1, 1, 1], [1, 1, 1, 1, 1], [1, 1, 1, 1, 1], [1, 1, 1, 1, 1]];
//start end
var startpanel = document.getElementById('startpanel');
var startrat = document.getElementById('startrat');
var endpanel = document.getElementById('endpanel');
var endrat = document.getElementById('endrat');
// variables of maze
// 1
// var one = document.getElementById('one');
// one.addEventListener('click', () => {
//     one.style.background = "purple";
//     arr[0][0] = 0;
// })
// 2
var two = document.getElementById('two');
two.addEventListener('click', () => {
    two.style.background = "purple";
    arr[0][1] = 0;
})
//3
var three = document.getElementById('three');
three.addEventListener('click', () => {
    three.style.background = "purple";
    arr[0][2] = 0;
})
//4
var four = document.getElementById('four');
four.addEventListener('click', () => {
    four.style.background = "purple";
    arr[0][3] = 0;
})
//5
var five = document.getElementById('five');
five.addEventListener('click', () => {
    five.style.background = "purple";
    arr[0][4] = 0;
})
//6
var six = document.getElementById('six');
six.addEventListener('click', () => {
    six.style.background = "purple";
    arr[1][0] = 0;
})
//7
var seven = document.getElementById('seven');
seven.addEventListener('click', () => {
    seven.style.background = "purple";
    arr[1][1] = 0;
})
//8
var eight = document.getElementById('eight');
eight.addEventListener('click', () => {
    eight.style.background = "purple";
    arr[1][2] = 0;
})
//9
var nine = document.getElementById('nine');
nine.addEventListener('click', () => {
    nine.style.background = "purple";
    arr[1][3] = 0;
})
//10
var ten = document.getElementById('ten');
ten.addEventListener('click', () => {
    ten.style.background = "purple";
    arr[1][4] = 0;
})
//11
var one1 = document.getElementById('one1');
one1.addEventListener('click', () => {
    one1.style.background = "purple";
    arr[2][0] = 0;
})
//12
var two1 = document.getElementById('two1');
two1.addEventListener('click', () => {
    two1.style.background = "purple";
    arr[2][1] = 0;
})
//13
var three1 = document.getElementById('three1');
three1.addEventListener('click', () => {
    three1.style.background = "purple";
    arr[2][2] = 0;
})
//14
var four1 = document.getElementById('four1');
four1.addEventListener('click', () => {
    four1.style.background = "purple";
    arr[2][3] = 0;
})
//15
var five1 = document.getElementById('five1');
five1.addEventListener('click', () => {
    five1.style.background = "purple";
    arr[2][4] = 0;
})
//16
var six1 = document.getElementById('six1');
six1.addEventListener('click', () => {
    six1.style.background = "purple";
    arr[3][0] = 0;
})
//17
var seven1 = document.getElementById('seven1');
seven1.addEventListener('click', () => {
    seven1.style.background = "purple";
    arr[3][1] = 0;
})
//18
var eight1 = document.getElementById('eight1');
eight1.addEventListener('click', () => {
    eight1.style.background = "purple";
    arr[3][2] = 0;
})
//19
var nine1 = document.getElementById('nine1');
nine1.addEventListener('click', () => {
    nine1.style.background = "purple";
    arr[3][3] = 0;
})
//20
var ten1 = document.getElementById('ten1');
ten1.addEventListener('click', () => {
    ten1.style.background = "purple";
    arr[3][4] = 0;
})
//21
var one11 = document.getElementById('one11');
one11.addEventListener('click', () => {
    one11.style.background = "purple";
    arr[4][0] = 0;
})
//22
var two11 = document.getElementById('two11');
two11.addEventListener('click', () => {
    two11.style.background = "purple";
    arr[4][1] = 0;
})
//23
var three11 = document.getElementById('three11');
three11.addEventListener('click', () => {
    three11.style.background = "purple";
    arr[4][2] = 0;
})
//24
var four11 = document.getElementById('four11');
four11.addEventListener('click', () => {
    four11.style.background = "purple";
    arr[4][3] = 0;
})
//25
// var five11 = document.getElementById('five11');
// five11.addEventListener('click', () => {
//     five11.style.background = "purple";
//     arr[4][4] = 0;
// })




// reset button
var reset = document.getElementById('reset');
reset.addEventListener('click', () => {
    document.location.reload();
})


// backtracking

//escape
var noEscape = document.getElementById('noEscape');
noEscape.style.visibility = 'hidden';

// solve 

var solve = document.getElementById('solve');
solve.addEventListener('click', () => {

    let x = 0
    let y = 0
    let n = 5
    function isSafe(arr, x, y, n) {
        if (x < n && y < n && arr[x][y] == 1 && x>=0 && y>=0) {
            return true;
        }
        return false;
    }
    
    // rat in maze

    var solArr = [[0, 0, 0, 0, 0], [0, 0, 0, 0, 0], [0, 0, 0, 0, 0], [0, 0, 0, 0, 0], [0, 0, 0, 0, 0]];
    function RatInMaze(arr, x, y, n, solArr) {

        
        if (x == n - 1 && y == n - 1) {
            solArr[x][y] = 1;
            return true;
        }
        if (isSafe(arr, x, y, n)) {
            if (solArr[x][y] == 1) {
                return false;
            }
            solArr[x][y] = 1;
            if (RatInMaze(arr, x + 1, y, n, solArr)) {
                return true;
            }
            if (RatInMaze(arr, x, y + 1, n, solArr)) {
                return true;
            }
            if (RatInMaze(arr, x-1, y, n, solArr)) {
                return true;
            }
            if (RatInMaze(arr, x, y-1, n, solArr)) {
                return true;
            }
            solArr[x][y] = 0;      // backtracking
            return false;
        }
        return false;
    }
    RatInMaze(arr, x, y, n, solArr);
    
    
    // if conditions
    
    if (solArr[0][0]==1) {
        one.style.background = "green";
    }
    if (solArr[0][1]==1) {
        two.style.background = "green";
    }
    if (solArr[0][2]==1) {
        three.style.background = "green";
    }
    if (solArr[0][3]==1) {
        four.style.background = "green";
    }
    if (solArr[0][4]==1) {
        five.style.background = "green";
    }
    if (solArr[1][0]==1) {
        six.style.background = "green";
    }
    if (solArr[1][1]==1) {
        seven.style.background = "green";
    }
    if (solArr[1][2]==1) {
        eight.style.background = "green";
    }
    if (solArr[1][3]==1) {
        nine.style.background = "green";
    }
    if (solArr[1][4]==1) {
        ten.style.background = "green";
    }
    if (solArr[2][0]==1) {
        one1.style.background = "green";
    }
    if (solArr[2][1]==1) {
        two1.style.background = "green";
    }
    if (solArr[2][2]==1) {
        three1.style.background = "green";
    }
    if (solArr[2][3]==1) {
        four1.style.background = "green";
    }
    if (solArr[2][4]==1) {
        five1.style.background = "green";
    }
    if (solArr[3][0]==1) {
        six1.style.background = "green";
    }
    if (solArr[3][1]==1) {
        seven1.style.background = "green";
    }
    if (solArr[3][2]==1) {
        eight1.style.background = "green";
    }
    if (solArr[3][3]==1) {
        nine1.style.background = "green";
    }
    if (solArr[3][4]==1) {
        ten1.style.background = "green";
    }
    if (solArr[4][0]==1) {
        one11.style.background = "green";
    }
    if (solArr[4][1]==1) {
        two11.style.background = "green";
    }
    if (solArr[4][2]==1) {
        three11.style.background = "green";
    }
    if (solArr[4][3]==1) {
        four11.style.background = "green";
    }
    if (solArr[4][4] == 1) {
        startrat.style.visibility = "hidden";
        endrat.style.visibility = 'visible';
        startpanel.style.color = 'white';
        endpanel.style.color = 'white';
        five11.style.background = "green";

    }

})