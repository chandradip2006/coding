// let arr=[23 , 45 , 16 , 12 ,89];
// console.log(arr);
// console.log(arr[2]);
// console.log(arr.length);
// let cities=["kolkata" , "delhi" , "mumbai" , "chennai", "bangalore" , "lucknow" , "kanpur"];
// for(let city of cities){
//     console.log(city.toUpperCase());
// }
// console.log(cities.length);

// let num=[85 , 97 , 44, 37 , 76 , 60];
// let sum=0;
// for(let val of num){
//     sum=sum+val;
// }
// console.log(sum/(num.length));

// let price=[250,645,300,900,50];
// for(let i=0;i<price.length;i++){
//     price[i]=price[i]*0.9;
// }
// console.log(price);
// price.push(100,200,300);
// console.log(price);
// let deleted = price.pop();
// console.log(price);
// console.log("deleted: " , deleted);

// let marvel=["ironman" , "spiderman" , "thor"];
// let dc = ["superman" , "batman"];
// let heros=marvel.concat(dc);
// console.log(heros);
// console.log(marvel);
// console.log(dc);
// heros.unshift("antman");
// console.log(heros);
// let val = heros.shift();
// console.log(heros);
// console.log("deleted: ", val);

let company=["Bloomberg" , "Microsoft" , "Uber" , "Google" , "IBM" , "Netflix"];
console.log(company);
company.shift();
console.log(company);
company.splice(1,1,"Ola");
console.log(company);
company.push("Amazon");
console.log(company);