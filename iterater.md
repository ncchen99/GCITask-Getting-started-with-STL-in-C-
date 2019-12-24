---
description: 跌代器
---

# 🚀Iterater

Iterator 像是一個比較聰明的 [pointer ](https://kopu.chat/2017/05/15/c%E8%AA%9E%E8%A8%80-%E8%B6%85%E5%A5%BD%E6%87%82%E7%9A%84%E6%8C%87%E6%A8%99%EF%BC%8C%E5%88%9D%E5%AD%B8%E8%80%85%E8%AB%8B%E9%80%B2%EF%BD%9E/)可以指到容器內任何一個位置，然後操作那個位置的資料。

### 要印出整個陣列有兩個方法 :

```cpp
// 假如有一個陣列長這樣
// len = 5
int arr[] = {1, 2, 3, 4, 5};
int len = sizeof(arr) / sizeof(int);


/*========== 用 index(operator) 印出整個陣列 ==========*/

// 很簡單，應該也是大家最常用的方法
for(int i=0 ; i<len ; i++){
    cout << arr[i] << endl;
}


/*========== 用 pointer(指標) 印出整個陣列 ==========*/

// begin 指向的是 1 那個位置
// end 指向的是 5 後面沒有東西的那個位置
int *begin = arr + 0;
int *end = arr + len;

int *ptr;
for(ptr=begin ; ptr!=end ; ptr++){
    cout << *ptr << endl;   // 1, 2, 3, 4, 5
}
```

### 同樣要印出整個 Vector 也有兩個方法 :

```cpp
int arr[] = {1, 2, 3, 4, 5};
vector<int> vec(arr, arr+5);    // vec = [1, 2, 3, 4, 5]
int len = vec.size();           // len = 5


/*========== 用 index 印出整個 Vector ==========*/

// 很簡單跟陣列一樣
for(int i=0 ; i<len ; i++){
    cout << vec[i] << endl;
}


/*========== 用 iterator 印出整個 Vector ==========*/


// begin 指向的是 1 那個位置
// end 指向的是 5 後面沒有東西的那個位置
vector<int>::iterator begin = vec.begin();
vector<int>::iterator end = vec.end();

vector<int>::iterator it;
for(it=begin ; it!=end ; it++){
    cout << *it << endl;
}

// 跟上面的指標比較一下
// 真的很像吧
```

這下大家可能會有一個疑惑惹，明明Iterator在使用上就比較麻煩，語法也比較複雜，為甚麼我們還要使用它呢? 因為有些強大ㄉ容器是不能使用[operator](http://www.cplusplus.com/reference/array/array/operator[]/)存取ㄉ，像是 : set, map, list....

接下來Iterator還有很多用法，會在下一篇容器看到的🎮。



