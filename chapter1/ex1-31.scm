;multiplies model
;use this model to define factorail

(define (product f a next b)
    (if (> a b)
      1
      (* a (product f (next a) next b))))

(define (identity x)x)

(define (inc x)(+ 1 x))

(define (factorial n)
  (product identity 1 inc n))

