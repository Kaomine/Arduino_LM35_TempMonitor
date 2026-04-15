# \# Arduino LM35 Temperature Monitor 

# 

# \##  Mô tả dự án

# Dự án này thực hiện việc đọc dữ liệu nhiệt độ từ 3 cảm biến LM35 thông qua các kênh Analog của Arduino. Dữ liệu được xử lý và gửi lên máy tính thông qua giao tiếp Serial dưới định dạng JSON chuyên nghiệp, phục vụ cho việc giám sát và lưu trữ.

# 

# \##  Tính năng

# \* Đọc đồng thời 3 kênh cảm biến nhiệt độ (A0, A1, A2).

# \* Chuyển đổi giá trị ADC 10-bit sang độ C chính xác.

# \* Xuất dữ liệu định dạng \*\*JSON\*\* (`{"T0": x, "T1": y, "T2": z}`).

# \* Quản lý mã nguồn theo chuẩn Git/GitHub.

# 

# \## Phần cứng cần thiết

# | Linh kiện | Số lượng | Ghi chú |

# | :--- | :--- | :--- |

# | Arduino Uno R3  | 01 | Board điều khiển chính |

# | Cảm biến LM35 | 03 | Cảm biến nhiệt độ Analog |

# | Dây cắm (Jumpers) | 10+ | Đực-Cái, Đực-Đực |

# | Breadboard | 01 | Bo cắm thử nghiệm |

# 

# \## Cấu trúc thư mục

# ```text

# Arduino\_LM35\_TempMonitor/

# ├── firmware/            # Mã nguồn cho vi điều khiển

# │   └── LM35\_TempReader/

# │       └── LM35\_TempReader.ino

# ├── docs/                # Tài liệu hướng dẫn \& Sơ đồ nguyên lý

# ├── simulation/          # File mô phỏng Proteus/Wokwi

# ├── pc\_app/              # Ứng dụng máy tính (nếu có)

# └── README.md            # Tài liệu dự án

