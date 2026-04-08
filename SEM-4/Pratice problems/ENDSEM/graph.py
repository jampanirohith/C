# plt.scatter(x, y) — x-axis = speeding, y-axis = total
# Always add plt.xlabel(), plt.ylabel(), plt.title()
# End with plt.show()

import pandas as pd
import matplotlib.pyplot as plt

# Load dataset
df = pd.read_csv("car_crashes.csv")

# Create scatter plot
plt.scatter(df['speeding'], df['total'])

# Labels and title
plt.xlabel("Speeding-related Crashes")
plt.ylabel("Total Crashes")
plt.title("Speeding vs Total Car Crashes by State")

# Display the plot
plt.show()






# Create a bar plot showing the top 5 states by total crashes
# x-axis → state abbreviation (abbrev)
# y-axis → total crashes (total)
# Add a title: "Top 5 States by Total Car Crashes"

import pandas as pd
import matplotlib.pyplot as plt

df = pd.read_csv("car_crashes.csv")

# Get top 5 states by total crashes
top5 = df.nlargest(5, 'total')

# Bar plot
plt.bar(top5['abbrev'], top5['total'], color='steelblue')
plt.xlabel("State")
plt.ylabel("Total Crashes")
plt.title("Top 5 States by Total Car Crashes")
plt.show()





# Create a histogram of the total column with 8 bins
# x-axis → Total Crashes
# y-axis → Frequency
# Add a title: "Distribution of Total Car Crashes"

import pandas as pd
import matplotlib.pyplot as plt

df = pd.read_csv("car_crashes.csv")

# Histogram
plt.hist(df['total'], bins=8, color='coral', edgecolor='black')
plt.xlabel("Total Crashes")
plt.ylabel("Frequency")
plt.title("Distribution of Total Car Crashes")
plt.show()





# Create a box plot of the speeding column
# Add appropriate axis label and title: "Boxplot of Speeding-related Crashes"

import pandas as pd
import matplotlib.pyplot as plt

df = pd.read_csv("car_crashes.csv")

# Box plot
plt.boxplot(df['speeding'])
plt.ylabel("Speeding-related Crashes")
plt.title("Boxplot of Speeding-related Crashes")
plt.show()