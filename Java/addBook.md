# addBook
Seguir los pasos del hackmd haciendo el método addBook
```javascript=
public int addBook(book b){
        for (int i = 0; i < library.length ;i ++) {
            if(library[i] == null) {
              library [i] = b;
                return i;
            }            
        }
        return -1;
    }
````
