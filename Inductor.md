PWM
===

En un circuito, en el que el PWM está en serie con un inductor y una resistencia L, la corriente que circula puede hallarse de la siguiente manera:


Cuando el PWM está en 1 lógico a partir un tiempo T*k hasta T*k + tau:

Del inductor:
http://latex2png.com/output//latex_e4a0b3e262bcd9e055e9354b9088040f.png

De la resistencia:
http://latex2png.com/output//latex_51130defecc5f94baf7aa3463c3d1ab0.png

Resolvemos la ecuación diferencial:
http://latex2png.com/output//latex_263f1ab4b51d6d855a54051663236e64.png

y obtenemos:
http://latex2png.com/output//latex_fed7ae6ce3e475f0bfc1c3236ebf801c.png



Cuando el PWM está en 0 lógico desde un tiempo T*k + tau hasta un tiempo T*(k+1):


Del inductor:
http://latex2png.com/output//latex_af39a956e289e6595d720a5ea7d9b2db.png

De la resistencia:
http://latex2png.com/output//latex_51130defecc5f94baf7aa3463c3d1ab0.png

Resolvemos la ecuación diferencial:
http://latex2png.com/output//latex_151e8809cd194d1f265d2fe880460f0d.png

y obtenemos:
http://latex2png.com/output//latex_4f82bfee05e046b6561ff8f5a60e2b1a.png


Observamos que cuando k=0, Se inicia la circulación de corriente en el circuito:
i(0) = 0
http://latex2png.com/output//latex_c0b1fe90f9486b8ac8b2f4866aa1763e.png
en un tiempo tau, la corriente es:
http://latex2png.com/output//latex_11f6255b6fe1b40df1a8d068dc74275b.png

Para el primer 0 lógico:
http://latex2png.com/output//latex_1e411402c2e3bcf93a4a7349b8e95160.png
http://latex2png.com/output//latex_c1a0299f8a15d4702dccec14264297ea.png

Haciendo recursión, obtenemos que los extremos de oscilación son:
http://latex2png.com/output//latex_49e9bcb6b0f9f60b61043bc53257546f.png
http://latex2png.com/output//latex_765a55217c97e792e79797aab53dd5e8.png

Finalmente tomando límite cuando k?8 Obtenemos el valor máximo y mínimo de la amplitud de la oscilación:
http://latex2png.com/output//latex_362070496a379e450cf3694ee6ea96d1.png
http://latex2png.com/output//latex_88060cef510c1b0a3aa095547aaa2620.png

Se puede observar que a mayor inductancia y menor resistencia, la amplitud de la oscilación es mayor. 

##Nota: Las ecuaciones en función del tiempo son:
Si T*k + t = t =T*k	:
http://latex2png.com/output//latex_e09f9a5c3067db8633ec4487ca0c6f0a.png

Si T(k+1) = t = T*k + t  :
http://latex2png.com/output//latex_8747b4686f9fa98bef33a782cc49fc49.png

De las ecuaciones se observa que mientras menor sea la inductancia, la intensidad convergerá más rápido a su valor medio. Sucederá lo mismo a mayor resistencia. 