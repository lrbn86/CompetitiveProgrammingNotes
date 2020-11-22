const slowestKey = (releaseTimes, keysPressed) => {
  let n = releaseTimes.length;
  if (n <= 1) return keysPressed;
  let mp = {};
  mp[keysPressed[0]] = releaseTimes[0];
  for (let i = 1; i < n; i++) {
    let duration = releaseTimes[i + 1] - releaseTimes[i];
    console.log(keysPressed[i], releaseTimes[i + 1], releaseTimes[i]);
  }
  return "";
};


function main() {
  const result = slowestKey([9,29,49,50], "cbcd");
  console.log(result);
}

main();
