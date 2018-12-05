function res = simpson_sqrt()
  
  %Setzen der Intervallgrenzen
  A = 0;
  B = 1;
  Area = 2/3 * sqrt(B)^3 - 2/3 * sqrt(A)^3; %Integral of sqrt(x) from 0 to 1 with respect to x
  
  %Zerlegung des Intervalls [0, 1] in n = 2^N Teilintervalle mit N = 2,... ,10
  for i = 2:10
    sum = 0;
    Intervall = linspace(A, B, pow2(i)+1);
    
    %Berechnung des Integrals ueber Teilintervall mit Simpsonformel
    for j = 1:pow2(i)
      a = Intervall(j);
      b = Intervall(j+1);
      I = (b - a)/6 * (sqrt(a) + 4 * sqrt((a + b)/2) + sqrt(b));
      sum = sum + I;
    endfor
    
    %Berechnung der Differenz zwischen analytischem und numerischem Ergebnis
    x(i) = i;
    y(i) = abs(Area - sum);
    
  endfor
  
  %Plotten des Graphs mit logarithmischre Y-Achse
  semilogy(x, y);
endfunction
