reverseWords(s)
    {
        // code here
        const arr = s.split(".");
        let reversed = "";
        for(let i=arr.length-1; i>=0;i--){
            reversed += arr[i] 
            if(i>0){
            reversed += ".";

        }
    }
        return reversed;
        //   return (s.split(".").reverse().join('.')) 

    }
}
