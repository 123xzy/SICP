;use Newton to solve sqrt(x)
;program written from down to top
;case:(sqrt 2);(sqrt 3)
;change "good-enough?"function,because it is not useful in lager or small

(define (square x)
  (* x x))

(define (good-enough? guess oldguess)
  (< (/ (abs(- guess oldguess)) guess) 0.0001)) 
  
(define (average x y)
  (/ (+ x y) 2))

(define (improve guess x)
  (average guess (/ x guess)))

(define (sqrt-iter guess oldguess x)
  (if (good-enough? guess oldguess)
    guess
    (sqrt-iter (improve guess x) guess x )))
    
(define (sqrt x)
  (sqrt-iter 1.0 2.0 x))
