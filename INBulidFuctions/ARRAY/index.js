/* let fruits = ['banana', 'apple','peach'];
console.log(Object.keys(fruits));// create new object with keys 
console.log(Object.values(fruits));// return the values in arrays
console.log(Object.entries(fruits));// index + value 
console.log(Object.assign(fruits)); */


/*  concat() => this function concat the two array */

/* let arr = ['a','b','c'];
let arr2 = ['D','E','F'];
//let arr3 = arr.concat(arr2);
//console.log(arr3);
arr = arr.concat(arr2);
console.log(arr); */

// entries()
/* let arr = ['a','b','c'];
for(const [index,element] of arr.entries()){
    console.log(index,element);
} */


// every()
/* let array = [23,43,54,534,634,534,64,334];
const bigger = (element,index,array)=>{
 return element >= 10;
};
let arr = [34,534,54,34,34,43,3,3,45,5];
console.log(array.every(bigger));
console.log(arr.every(bigger)); */

// includes()  and every functions 
/* 
const subSet = (arr1,arr2) => arr2.every((element) => arr1.includes(element));
console.log(subSet([1,2,3,4,5],[5,6,7]));
console.log(subSet([1,2,3,4,5],[1,2,3])); */

// filter() => thats returns one by one value in arrays 
/* const arr = ['Sachin','Rahul','karan','RR','Hello','Hey','Thank You'];
//const result = arr.filter(element => element.includes('Sachin'));
const result = arr.filter(element => element.length < 6);
console.log(result); */


// find()
/* const arr = ['Sachin','Rahul','karan','RR','Hello','He','Thank You'];
let result = arr.find((element => element.length <= 2));
console.log(result); */