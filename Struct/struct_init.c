# i n c l u d e   < s t d i o . h >  
  
 s t r u c t   P e r s o n n e  
   {     c h a r     s e x e   ;  
         f l o a t     t a i l l e ,   p o i d s   ;  
   } ;  
    
   m a i n ( )   {  
  
       s t r u c t   P e r s o n n e   p e r s [ 1 0 0 ]   ;  
       i n t             i ,   n b P e r s                 ;   / *   l e   n o m b r e   e f f e c t i f   d e   p e r s o n n e s * /  
  
  
   p r i n t f ( " D o n n e z   l e   n o m b r e   d e   p e r s o n n e s   a   l i r e   ( 1 0 0   m a x . )   : \ n " ) ;  
   s c a n f ( " % d " , & n b P e r s ) ;  
  
   / / B o u c l e   d ' i n i t i a l i s a t i o n   d e   l a   s t r u c t u r e  
   f o r ( i = 0 ; i < n b P e r s ; i + + )  
   {  
       p r i n t f ( " E n t r e z   l e   s e x e     d e   l a   p e r s o n n e   N % d : \ t " , i + 1 ) ;  
       s c a n f ( " % c " , & p e r s [ i ] . s e x e ) ;  
  
       p r i n t f ( " E n t r e z   l a   t a i l l e   d e   c e t t e   p e r s o n n e : \ t " ) ;  
       s c a n f ( " % f " , & p e r s [ i ] . t a i l l e ) ;  
  
       p r i n t f ( " E n t r e z   l e   p o i d s   : \ t " ) ;  
       s c a n f ( " % f " , & p e r s [ i ] . p o i d s ) ;  
   }  
  
 }  
 