;use lambda to describe a funxtion like define but without name
;use case:(* 8 (pi-sum 1 1000))

(define (sum term a next b)
  (if (> a b)
    0 
    (+(term a)
      (sum term (next a) next b))))

(define (pi-sum a b)
  (sum (lambda (x)(/ 1.0 (* x (+ 2 x))))
       a
       (lambda (x)(+ 4 x))
       b))


