# Data-Compression-using-BWT-based-Algorithm-Stack

This repository contains the source code for a lossless data compression algorithm based on the Burrows-Wheeler Transform (BWT). The BWT is a widely used technique in data compression algorithms, utilized in popular tools such as the bzip2 encoder. Our implementation includes a stack of algorithms that collectively compress data or prepare it for compression using the BWT. Below are the key features of our BWT compression algorithm:

- **Run Length Encoding (RLE)**: Utilizes RLE to reduce repetitive sequences in the input data, optimizing it for subsequent compression steps.
- **Burrows-Wheeler Transform (BWT)**: Applies the BWT to rearrange the input data cyclically, facilitating efficient compression.
- **Move To Front (MTF)**: Rearranges characters based on their frequency, enhancing the effectiveness of compression.
- **Interval Coding**: Employs interval coding, a subset of PPM compression algorithms, to further compress the data based on probabilities and context within the sequence.
- **GPU Optimization**: Leverages CUDA and GPU-accelerated libraries for parallel processing, enhancing compression speed and efficiency.

Our BWT compression algorithm provides a versatile and efficient solution for lossless data compression, suitable for various applications. Feel free to explore the source code and documentation for further details and usage instructions.

## References

- "Burrows - Wheeler Transform in Lossless Data Compression Problems on Hybrid Computing Systems," _IEEE,_ DOI: [10.1109/ICCSPA48810.2020.9039028](https://ieeexplore.ieee.org/document/9039028)
