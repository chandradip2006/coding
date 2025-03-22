// function inc(i){
//     if(i<=10){
//         console.log("i: " , i);
//         inc(i+1);
//     }
//     else return;
// }
// inc(1);

// const sum=(a , b)=>{
//     return a+b;
// };
// const pdt=(a , b)=>{
//     return a*b;
// };
// console.log(sum);
// console.log(sum(5 , 2));
// console.log(pdt);
// console.log(pdt(5 , 2));

// function check(ch){
//     if(ch==='a'||ch==='A'||ch==='e'||ch==='E'||ch==='i'||ch==='I'||ch==='o'||ch==='O'||ch==='u'||ch==='U'){
//         return 1;
//     }
//     else return 0;
// }

// const check=(ch)=>{
//     if(ch==='a'||ch==='A'||ch==='e'||ch==='E'||ch==='i'||ch==='I'||ch==='o'||ch==='O'||ch==='u'||ch==='U'){
//         return 1;
//     }
//     else return 0;
// };

// const count=(str)=>{
//     let count=0;
//     for(let i of str){
//         if(check(i)){
//             count++;
//         }
//     }
//     return count;
// };

// let str=prompt("Enter a String: ");
// console.log("the no. of vowels is: " , count(str));

// let arr=[1 , 2 , 3 , 4 , 5 , 6];
// // arr.forEach(function print(val){
// //     console.log(val);
// // })

// arr.forEach((val)=>{
//     console.log(val);
// });

// let city=["mumbai" , "chennai" , "kolkata","delhi" , "kanpur"];
// city.forEach((val , idx , city)=>{
//     console.log(val.toUpperCase() , idx , city);
// })

// let n;
// n=prompt("Enter the size of the array: ");
// let arr1=[];
// let arr2=[];
// let z;
// for(let i=0;i<n;i++){
//     z=prompt(`enter number${i+1}:`);
//     arr1.push(z);
// }
// console.log(arr1);
// // arr1.forEach((val)=>{
// //     arr2.push(val*val);
// // });

// arr2=arr1.map((val)=>{
//     return val*val;
// })
// console.log(arr2);

// const arr1= [1 , 2, 3, 4 , 5 , 6 , 7 , 8 , 9 ,0];
// // let arr2=arr1.filter((val)=>{
// //     return val%2===0;
// // });
// console.log(arr1);
// // console.log(arr2);

// // const sum=arr1.reduce((res , curr)=>{
// //     return res+curr;
// // });
// const largest=arr1.reduce((pre,curr)=>{
//     if(pre>=curr){
//         return pre;
//     }
//     else return curr;
// });
// console.log(largest);

// let n;
// n=prompt("Enter the no. of students: ");
// let arr1=[];
// let x;
// for(let i =0;i<n;i++){
//     x=prompt(`Enter the marks of student${i+1}: `);
//     arr1.push(x);
// }
// console.log(arr1);
// let arr2=arr1.filter((val)=>{
//     return val>90;
// });
// console.log(arr2);

let n=prompt("Enter a Number: ");
let arr=[];
for(let i=1;i<=n;i++){
    arr.push(i);
}
console.log(arr);
const sum=arr.reduce((pre,curr)=>{
    return pre+curr;
});
console.log("sum: " , sum);
const pdt=arr.reduce((pre,curr)=>{
    return pre*curr;
});
console.log("product: " , pdt);
