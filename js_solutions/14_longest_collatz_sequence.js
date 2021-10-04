const collatzNum = (n) => {
  if (n % 2 == 0) return Math.floor(n / 2);
  return 3 * n + 1;
};

const collatzSeqeunceLength = (n) => {
  let length = 1;
  while (n !== 1) {
    n = collatzNum(n);
    length++;
  }
  return length;
};

// memory inefficient
// const collatzSeqeunce = n => {
//   const collatz = [n];
//   while (n !== 1) {
//     const nextCollatz = collatzNum(n);
//     collatz.push(nextCollatz);
//     n = nextCollatz;
//   }
//   return {collatz, length};
// }

const longest_sequence = () => {
  // don't start at 0!
  collatzStart = 1;
  currentLength = 0;
  for (let i = 1; i < 1_000_000; i++) {
    const length = collatzSeqeunceLength(i);
    if (length > currentLength) {
      collatzStart = i;
      currentLength = length;
    }
  }
  return collatzStart;
};

console.log(longest_sequence());
