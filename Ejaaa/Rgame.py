import random

kata = ['python', 'javascript', 'ruby', 'html', 'css', 'php']

print("Selamat datang di game Tebak Kata!")
print("Saya akan memilih sebuah kata secara acak.")
print("Silakan tebak kata yang saya pilih.")

# Memilih sebuah kata secara acak
kata_rahasia = random.choice(kata)

# Mengubah kata menjadi sebuah list karakter
list_kata = list(kata_rahasia)

# Membuat list kosong untuk menampung tebakan
tebakan = ['_'] * len(kata_rahasia)

# Loop untuk meminta input dari pemain
while True:
    # Mencetak tebakan saat ini
    print(' '.join(tebakan))
    
    # Memeriksa apakah pemain telah menebak seluruh karakter
    if '_' not in tebakan:
        print("Anda menang! Kata yang saya pilih adalah", kata_rahasia)
        break
    
    huruf = input("Masukkan huruf tebakan Anda: ")
    
    # Memeriksa apakah huruf tersebut terdapat dalam kata yang dipilih
    if huruf in list_kata:
        # Mengganti '_' dengan huruf jika ditebak dengan benar
        for i in range(len(list_kata)):
            if list_kata[i] == huruf:
                tebakan[i] = huruf
    else:
        print("Tebakan Anda salah. Coba lagi.")

print("Terima kasih telah bermain!")