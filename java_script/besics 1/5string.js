const name ="Manish"
const repoCount =50

console.log(`Hello my name is ${name} and my repocount is ${repoCount}`);
const gameName = new String('Manish ')
console.log(gameName[0]);
console.log(gameName._proto_);


console.log(gameName.length);
console.log(gameName.toUpperCase());
console.log(gameName.charAt(2))
console.log(gameName.indexOf('n')); 

 const newString = gameName.substring(0,4);
 console.log(newString);

 const anotherString = gameName.slice(-6,4)
 console.log(anotherString);

 const newStringone = "   Manish   "
 console.log(newStringone);
 console.log(newStringone.trim())


 const url ="https://hitesh.com/hitesh%20choudhary"

 console.log(url.replace('%20','-'))
 console.log (url.includes('sundar'))
