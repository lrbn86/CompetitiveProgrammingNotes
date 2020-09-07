const wordPattern = (pattern, str) => {
  let letters = Array.from(new Set(pattern));
  let words = Array.from(new Set(str.split(' ')));
  
  let mp = {};

  for (let i in letters) {
    mp[letters[i]] = words[i];
  }

  let patternWords = [];

  for (let letter of pattern) {
    patternWords.push(mp[letter]);
  }

  return patternWords.join(' ') === str;
}

pattern = 'abba';
str = 'dog cat cat dog';

let result = wordPattern(pattern, str);
let expected = true;

if (result === expected) {
  console.log("AC");
} else {
  console.log("WA");
}
