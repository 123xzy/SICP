;return two big od all three

(define (sumlarge a b c)
  (cond
    ((and (>= a b) (>= c b)) (+ a c))
    ((and (>= a c) (>= b c)) (+ a b))
    ((and (>= b a) (>= c a)) (+ b c))
  )
)

  
