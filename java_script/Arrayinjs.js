// array

const myArr =[0,1,2,3,4,5]
const myHeors =["shaktiman","naagrej"]
console.log(myHeors[1])

const myArr2 = new Array(1,2,3,4)
console.log(myArr[1])

//Array methods

//myArr.push(6)
//myArr.push(7)
//myArr.pop()
//console.log(myArr)

myArr.shift()
console.log(myArr)
console.log(myArr.includes(9))
console.log(myArr.indexOf(3))

//slice,splice

console.log("A",myArr);

const myn1 = myArr.slice(1,3)

console.log(myn1)
console.log("B",myArr)

const myn2 = myArr.splice(1,3)
console.log("c",myArr)
console.log(myn2)