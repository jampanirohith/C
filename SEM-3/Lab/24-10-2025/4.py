import numpy as np
from PIL import Image

img = Image.open("image1.jpg").convert("L")
A = np.array(img, dtype=np.float32)


U, S, Vt = np.linalg.svd(A, full_matrices=False)

k=50
k = int(min(k, min(A.shape)))
Ak = (U[:, :k] * S[:k]) @ Vt[:k, :]

Ak_u8 = np.clip(Ak, 0, 255).astype(np.uint8)
Image.fromarray(Ak_u8, mode="L").save("compressed_image.png")

print("Done. Wrote compressed_image.png")