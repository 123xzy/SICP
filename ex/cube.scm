;solve cube root with Newton
;case:1,27,3
;this program still has bug
;2018/05/20

(define (square x)
  (* x x))

(define (good-enough? guess oldguess)
  (< (/ (abs(- guess oldguess)) guess) 0.0001)) 
  
(define (average x y)
  (/ (+ x y) 3))

(define (improve guess x)
  (average (/ x (square guess)) (+ guess guess) ))

(define (cube-iter guess oldguess x)
  (if (good-enough? guess oldguess)
    guess
    (cube-iter (improve guess x) guess x )))
    
(define (cube x)
  (cube-iter 1.0 0.0 x))
