import numpy as np
from scipy import integrate

# Define the pollutant concentration function
def C(t):
    return np.exp(-0.3 * t) * np.sin(t)

# Numerical integration using quad
result, error = integrate.quad(C, 0, 10)

# Print results
print("Total pollutant (integral result):", result)
print("Estimated error:", error)


# Output
# Total pollutant (integral result): 0.9632113946967985
# Estimated error: 6.612...e-12


















