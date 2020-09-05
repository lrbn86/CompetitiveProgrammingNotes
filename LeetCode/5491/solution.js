/**
 * @param {number[][]} mat
 * @return {number}
 */
const diagonalSum = mat => {    
    let answer = 0;
    let n = mat.length;
    if (n % 2 == 0) {
        // Primary diagonal
        for (let i = 0; i < n; i++) {
            for (let j = 0; j < n; j++) {
                if (i === j) answer += mat[i][j]; // Primary diagonal
                if (i === n - j - 1) answer += mat[i][j]; // Secondary diagonal
            }
        }
    } else {
        // Do not count the middle element twice
        let middle = Math.floor(n / 2);
        for (let i = 0; i < n; i++) {
            for (let j = 0; j < n; j++) {
                if (i === j) answer += mat[i][j]; // Primary diagonal
                if (i === n - j - 1 && (i !== middle && j !== middle)) answer += mat[i][j]; // Secondary diagonal
            }
        }
    }
    return answer;
}
