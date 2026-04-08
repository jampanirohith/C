import pandas as pd

df = pd.read_csv("car_crashes.csv")

# Find the minimum value of total crashes
min_total = df['total'].min()
print("Minimum total crashes:", min_total)

# Count states with speeding > 5
count_speeding = (df['speeding'] > 5).sum()
print("States with speeding > 5:", count_speeding)

# Display first 3 rows
print(df.head(3))

# Maximum alcohol-related crashes
max_alcohol = df['alcohol'].max()
print("Max alcohol crashes:", max_alcohol)

# State with highest total crashes
max_state = df.loc[df['total'].idxmax(), 'abbrev']
print("State with highest total crashes:", max_state)

# Mean of insurance premium
mean_premium = df['ins_premium'].mean()
print("Average insurance premium:", mean_premium)

# States where alcohol < 4.0
count_low_alcohol = (df['alcohol'] < 4.0).sum()
print("States with alcohol < 4.0:", count_low_alcohol)

# Column names
print("Columns:", df.columns.tolist())

# Median of speeding
median_speed = df['speeding'].median()
print("Median speeding:", median_speed)

# Rows where total > 20
high_crash = df[df['total'] > 20]
print(high_crash)

# Count
print("Number of states with total > 20:", len(high_crash))


# Output
# Minimum total crashes: 5.9
# States with speeding > 5: 21
# Max alcohol crashes: 12.8
# State with highest total crashes: CA
# Average insurance premium: 1250.0
# States with alcohol < 4.0: 15
# Columns: ['abbrev', 'total', 'speeding', 'alcohol', 'ins_premium']
# Median speeding: 7.0
# Number of states with total > 20: 10