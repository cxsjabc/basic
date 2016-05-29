
var obj = new Object();
var objRef = obj;

obj.oneProperty = true;

console.log(obj.oneProperty == objRef.oneProperty);
