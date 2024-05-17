//Artimetic operators
// let a=5;
// let b=6;
// console.log("a+b =",a+b);
// console.log("a-b =",a-b);
// console.log("a*b =",a*b);
// console.log("a/b =",a/b);


//unary opertor
// let a=4;
// let b=9;
// console.log("a= ",a," b =",b);
/*a++;
console.log("a= ",a);//6
b++;
console.log("b=", b);*/
// a--;
// console.log("a= ",a);
// b--;
// console.log("b=",b);


//Asignmet operators
// let a=5;
// let b=2;
//  a*=4;//a=a*4  //(a% a+ a**4 etc.)
//  console.log("a=",a);//1



//comprison operators
// let a = 5;
// let b= 6;
// console.log("5==9",a==b);//false //(equal to )
// console.log("5!=8",a!=b);//true//(not equle to )
// console.log("5!==8",a!==b);//ture//(not equal to & type)
// console.log("5===8",a===b);//false//(equle to & type)
// console.log("5>8",a>b)


//logical operators
// let a = 5;
// let b = 7;
// let cond1= a>b;//false
// let  cond2=a===b;//false
// console.log("cond1 && cond2 =",cond1 && cond2);//logical AND
// console.log("cond1 || cond2 =",cond1 || cond2);//logical OR
// console.log("!(6<5)=",!(a<b));//logicol NOT



//COndition statements ((if condition))
/*let mode="dark";
let color;
if(mode==="dark")
{
    color ="black";

}
if(mode==="light"){
    color ="white";
}
console.log(color);
*/
//let age= 18;
/*if(age>=18){
    console.log("you can vote");
}
if(age<=18) {
    console.log("you cannot vote")
}*/


//((if-else statement))
// let mode="blue";
//  let color;
//  if(mode=="drak")
//  {
//     color="black";
// }else{
//     color="white";
// }
// console.log(color); 


//((else if statement))
// let mode ="dark";
// let color;
// if(mode === "dark")
// {
//     color = "black";
// }else if( mode ==="blue")
// {
//     color ="blue";

// }
// else if(mode==="pink")
// {
//     color ="pink";
// }
// else{
//     color="white";
// }
// console.log(color);



//ternary operators
// let age =25;
// let result =age>=18? "adult": "not adult";
// console.log(result);

//Q get user to input a number using prompt("enter a number :") check if the number is a multiple of 5 or not.
let num =prompt ("enter  a number ");
if(num%5===0){
    console.log(num,"is a multiple of 5");
}else{
    console.log(num,"is not a multiple of 5");
}