#!/bin/bash

# تحديد أحدث ملف مصدر .cpp في المجلد الحالي
source_file=$(find . -maxdepth 1 -name "*.cpp" -print0 | xargs -0 ls -t | head -n 1)

# التحقق من وجود ملف مصدر
if [ -z "$source_file" ]; then
    echo "No source file found. Please place a .cpp file in the directory."
    exit 1
fi

filename=$(basename "$source_file")
output_dir="build"
output_file="$output_dir/output_program"

# إنشاء مجلد البناء إذا لم يكن موجودًا
mkdir -p "$output_dir"

# حذف الملف القديم إذا كان موجودًا
if [ -f "$output_file" ]; then
    echo "Removing old executable..."
    rm "$output_file"
fi

# بناء البرنامج
echo "Building $filename..."
g++ -g "$source_file" -o "$output_file"

# التحقق من نجاح البناء
if [ $? -eq 0 ]; then
    echo "Build successful. Running the program..."
    # تشغيل البرنامج
    echo "
    
    "
    "$output_file"
    echo "
    
    "
    echo "
    ---------------------------------------------"
    echo "From System:"
    read -p "Programe Will Exit in 5 minutes...." -t 300
else
    echo "Build failed."
fi

