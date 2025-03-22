function num(ch){
    for(let i=0;i<=9;i++){
        if(ch==i){
            return i;
        }
    }
}
let box=document.querySelectorAll(".button");
let box1=document.querySelector("#result");
let r=0;
let sum=0;
let x=1;
box.forEach((div)=>{
    div.addEventListener("click",()=>{
        console.log("button clicked");
        
        if(div.innerText==="CLEAR"){
            box1.innerText="";
            r=0;
            sum=0;
            document.getElementById("result").style.fontWeight="normal";
        }
        else {
            if(div.innerText!=="="){
                box1.innerText=box1.innerText+div.innerText;
                if(div.innerText==="+"){
                    if(x===-1){
                        r=(-r);
                    }
                    sum=sum+r;
                    r=0;
                    x= 1;
                }
                else if(div.innerText==="-"){
                    if(x===-1){
                        r=(-r);
                    }
                    sum=sum+r;
                    r= 0;
                    x= -1;
                }
                if(div.innerText!=="-"&&div.innerText!=="+"){
                    r=((r*10)+num(div.innerText));
                }
            }
            else {
                if(x===-1){
                    r=(-r);
                }
                document.getElementById("result").style.fontWeight="bolder";
                sum=sum+r;
                box1.innerText=sum;
                console.log(sum);
                r=0;
                sum=0;
            }
        }
       
})});
