var merge = function(intervals) {
}

function isEqual(arr1, arr2) {
	if (arr1.length !== arr2.length) return false;
	arr1.sort((a,b) => a - b);
	arr2.sort((a,b) => a - b);
	for (let i = 0; i < arr1.length; i++) {
		if (arr1[i] !== arr2[i]) return false;
	}
	return true;
}

function test0() {
	let arr1 = [[1,6],[8,10],[15,18]];
	let arr2 = [[1,6],[8,10],[15,18]];
	if (isEqual(arr1, arr2)) {
		console.log("OK:", arr1, arr2);
	} else {
		console.log("Not equal:", arr1, arr2);
	}
}

function test1() {
	let arr1 = [[1,3],[2,6],[8,10],[15,18]];
	let result = merge(arr1);
	let expected = [[1,6],[8,10],[15,18]];
	if (isEqual(result, expected)) {
		console.log("OK");
	} else {
		console.log("Not Equal:", result, expected);
	}
}

test0();
