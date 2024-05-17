function findSum(n) { 
    let sum = 0; 
    for (let i = 1; i <= n; i++) 
        sum = sum + i; 
    return sum; 
} 
  
// Driver code 
const n = 5; 
console.log(findSum(n));