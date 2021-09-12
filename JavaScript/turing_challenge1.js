s = 'abcde'
t = 'ceadb'

A=[...s]
B=[...t]

console.log(A)
console.log(B)

B.reduce(
    (val, ele) => { 
        A.find(e => { 
            if (ele !== e) { 
                val.push(e) 
            } 
        } 
    }, '');
