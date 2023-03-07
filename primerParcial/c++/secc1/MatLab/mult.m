
A = [1 2 3;     4 5 6;     7 8 9];
B = [9 8 7;     6 5 4;     3 2 1];

C = zeros(3, 3);


for i=1:3
  for j=1:3
    for k=1:3
      C(i, j) = C(i, j) + A(i, k) * B(k, j);
    end
  end
end

disp(C);
