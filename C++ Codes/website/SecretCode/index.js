let Generateinput = document.querySelector('.Generateinput');
const generate  = document.querySelector('.generate');
// var show = document.querySelector('.show');
// var code  = document.querySelector('.code');
// var code1 = document.querySelector('.code1');
// var key = document.querySelector('.keycode');
// var keygen = document.querySelector('.keygen');
var showpopup = document.querySelector('.showpopup');



var IncriptedText = document.getElementById('IncriptedText');
var IncriptedCode = document.getElementById('IncriptedCode');
// var KeyText = document.getElementById('keytext');
var Keyvalue = document.getElementById('keyvalue');


var copybutton1 = document.getElementById('copybutton1');
var copybutton2 = document.getElementById('copybutton2');
var copytext = document.getElementById('copytext');
function generator() {
            
            var IncriptedText = document.getElementById('IncriptedText');
            var Keyvalue = document.getElementById('keyvalue');

            let Generateinput = document.querySelector(".Generateinput");

            let ans="";
            let s = Generateinput.value;
            if(s!=""){
              s = s.toUpperCase();
              var randomnum = String((Math.floor(Math.random() * 9012)) + 999);
              for(let i=0;i<4;i++){
                  ans+=randomnum[i];
              }
              for(let i=0;i<Generateinput.value.length;i++){
                  if (s[i] == " ") {
                    ans += "32";
                  } else {
                    var char1 = s[i];
                    ans += char1.charCodeAt() - 26;
                  }
              }
              let answer = "";
              for (let i = 0; i < ans.length; i += 2) {
                  let num1 = ans[i];
                  let num2 = ans[i + 1];
                  var num = num1 + num2;
                  var bum = parseInt(num);
                  if (bum == 32) {
                    answer += " ";
                  } else {
                    answer += String.fromCharCode(bum + "26");
                  }
              }
              
              IncriptedText.innerHTML = answer;
              Keyvalue.innerHTML = randomnum;
              let showpopup = document.querySelector('.showpopop');
              showpopup.style.visibility = 'visible';
            } else {
              alert("Enter Some Text!");
            }
}
var inputtxt = document.querySelector('.inputtxt');
var keyinput = document.querySelector('.keyinput');
// var readtext = document.querySelector('.readtext');
function readtext() {
            let inputtxt = document.querySelector(".inputtxt");
            let keyinput = document.querySelector(".keyinput");

            let ans = inputtxt.value;
            let genkey =keyinput.value;
            if(ans=="" || genkey==""){
                  console.log("yes");
                  alert("Enter the Details!")
            }else{
                var answer = "";
                for (let i = 0; i < 2; i++) {
                  let char1 = (ans[i]);
                  answer += (char1.charCodeAt() - 26) / 100;
                }
                for (let i = 2; i < ans.length; i++) {
                  let char1 = (ans[i]);
                  answer += (char1.charCodeAt() - 26) / 100;
                }
                var keycode = "";
                for (let i = 0; i < 4; i++) {
                  keycode += answer[i];
                }
                if (keyinput.value == keycode) {
                  var answercode = "";
                  for (let i = 4; i < answer.length - 3; i += 2) {
                    let num1 = answer[i];
                    let num2 = answer[i + 1];
                    var num = num1 + num2;
                    var bum = parseInt(num) + 26;
                    if (bum == 26) {
                      answer += " ";
                    } else {
                      answercode += String.fromCharCode(bum);
                    }
                  }
                  // console.log(answercode);
                  var IncriptedCode = document.getElementById("IncriptedCode");
                  IncriptedCode.innerText = answercode;
                  

                }
              }
              
            
            
}
        