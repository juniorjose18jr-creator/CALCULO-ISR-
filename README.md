# Cálculo del ISR - República Dominicana 2026

**Estudiante:** Junior Ivón José Jean
**Matrícula:** 2026-1655
**Asignatura:** Lógica de Programación
**Profesor:** Gamalier Reyes del Carmen

## Resumen
Programa en C++ que lee el sueldo mensual de un empleado, lo convierte a anual y calcula el ISR (Impuesto Sobre la Renta) según la escala salarial de la DGII vigente para 2026. Muestra el sueldo y el descuento de ISR; si el sueldo está exento, muestra 0 (N/A).

| Renta anual (RD$) | ISR a pagar |
|---|---|
| Hasta 416,220.00 | Exento |
| 416,220.01 – 624,329.00 | 15% del excedente de 416,220.01 |
| 624,329.01 – 867,123.00 | 31,216.00 + 20% del excedente de 624,329.01 |
| Más de 867,123.01 | 79,776.00 + 25% del excedente de 867,123.01 |

## Capturas del programa en ejecución

**Escenario 1 – Exento (sueldo RD$30,000):**

![Escenario 1](Screenshot%202026-11-07%20212818.png)

**Escenario 2 – Tramo del 15% (sueldo RD$45,000):**

![Escenario 2](Screenshot%202026-11-07%20212858.png)

**Escenario 3 – Tramo del 20% (sueldo RD$60,000):**

![Escenario 3](Screenshot%202026-11-07%20212929.png)

**Escenario 4 – Tramo del 25% (sueldo RD$100,000):**

![Escenario 4](Screenshot%202026-11-07%20212947.png)
