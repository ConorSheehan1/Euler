const sum_factors_map = (n) => {
  const range = [...Array(n).keys()];
  return range.reduce((acc, v) => {
    if (v % 3 === 0 || v % 5 === 0) {
      return acc + v;
    }
    return acc;
  }, 0);
};

const sum_factors = (n) => {
  total = 0;
  for (let i = 0; i < n; i++) {
    if (i % 3 === 0 || i % 5 == 0) {
      total += i;
    }
  }
  return total;
};

// expected 233168
console.log(sum_factors_map(1000), sum_factors_map(1000) === 233168);
console.log(sum_factors(1000), sum_factors(1000) === 233168);
