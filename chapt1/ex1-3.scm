;return two big of all three
;case : (sumlarge 5 2 6)
;return: 11

(define (sumlarge a b c)
  (cond
    ((and (>= a b) (>= c b)) (+ a c))
    ((and (>= a c) (>= b c)) (+ a b))
    ((and (>= b a) (>= c a)) (+ b c))
  )
)

  
