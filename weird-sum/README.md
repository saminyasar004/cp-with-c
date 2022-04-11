## Weird Sum

Egor has a table of size `n×m`, with lines numbered from 1 to n and columns numbered from 1 to m. Each cell has a color that can be presented as an integer from 1 to 105.

Let us denote the cell that lies in the intersection of the r-th row and the c-th column as (r,c). We define the manhattan distance between two cells (r1,c1) and (r2,c2) as the length of a shortest path between them where each consecutive cells in the path must have a common side. The path can go through cells of any color. For example, in the table 3×4 the manhattan distance between (1,2) and (3,3) is 3, one of the shortest paths is the following: (1,2)→(2,2)→(2,3)→(3,3).

Egor decided to calculate the sum of manhattan distances between each pair of cells of the same color. Help him to calculate this sum.

## Input

The first line contains two integers n and m (1≤n≤m, n⋅m≤100000) — number of rows and columns in the table.

Each of next n lines describes a row of the table. The i-th line contains m integers ci1,ci2,…,cim (1≤cij≤100000) — colors of cells in the i-th row.

## Output

Print one integer — the the sum of manhattan distances between each pair of cells of the same color.

## Examples

### Input

```shell
2 3
1 2 3
3 2 1
```

### Output

```shell
7
```

### Input

```shell
3 4
1 1 2 2
2 1 1 2
2 2 1 1
```

### Output

```shell
76
```

### Input

```shell
4 4
1 1 2 3
2 1 1 2
3 1 2 1
1 1 2 1
```

### Output

```shell
129
```

## Note

In the first sample there are three pairs of cells of same color: in cells (1,1) and (2,3), in cells (1,2) and (2,2), in cells (1,3) and (2,1). The manhattan distances between them are 3, 1 and 3, the sum is 7.
