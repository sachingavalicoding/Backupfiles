/* let arr = [20,34,154,65,23,43,5,70];
//min = 20 
// max = 70
let max = arr[0];
let min = arr[0];
for(let i = 1 ; i < arr.length; i++){
    if(max < arr[i]){
        max = arr[i];
    }
    if(min > arr[i]){
        min = arr[i];
    }
}
console.log(max);
console.log(min); */
 let arr = [20,34,154,65,23,43,5,70];
//min = 20 
// max = 70
let max = arr[0];
let min = arr[0];
let findMinMax = (max, min,arr) =>{
    for(let i = 1 ; i < arr.length; i++){
        if(max < arr[i]){
            max = arr[i];
        }
        if(min > arr[i]){
            min = arr[i];
        }
    }
    return [max , min];
}

let ans = findMinMax(max,min,arr);
console.log(ans);