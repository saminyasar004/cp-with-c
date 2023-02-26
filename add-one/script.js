function reverse(n, m) {
  let nString = n.toString(); // "1234"
  let modulo = [];
  for (let i = 0; i < m; i++) {
    modulo.push(
      nString
        .split("")
        .map((el) => {
          return (parseInt(el) + 1).toString();
        })
        .join("")
    );
    nString = modulo[modulo.length - 1];
  }
  console.log(modulo);
}

reverse(1912, 4);
