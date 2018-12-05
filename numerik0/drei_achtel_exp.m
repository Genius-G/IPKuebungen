function res = drei_achtel_exp()
  
  %Setzen der Intervallgrenzen
  A = 0;
  B = 1;
  Area = exp(B) - exp(A); %Integral of exp(x) from 0 to 1 with respect to x
  
  %Zerlegung des Intervalls [0, 1] in n = 2^N Teilintervalle mit N = 2,... ,10
  for i = 2:10
    sum = 0;
    Intervall = linspace(A, B, pow2(i)+1);
    
    %Berechnung des Integrals ueber Teilintervall mit Drei Achtel Formel
    for j = 1:pow2(i)
      a = Intervall(j);
      b = Intervall(j+1);
      H = (b-a)/3;
      I = (b - a)/8 * (exp(a) + 3*exp(a+H) + 3*exp(b-H) + exp(b));
      sum = sum + I;
    endfor
    
    %Berechnung der Differenz zwischen analytischem und numerischem Ergebnis
    x(i) = i;
    y(i) = abs(Area - sum);
    
  endfor
  
  %Plotten des Graphs mit logarithmischre Y-Achse
  semilogy(x, y);
endfunction
