/* taken from linux/include/asm-or1k/stat.h */

#ifndef _BITS_STAT_STRUCT_H
#define _BITS_STAT_STRUCT_H

#ifndef _LIBC
#error bits/kernel_stat.h is for internal uClibc use only!
#endif

struct kernel_stat {
    unsigned long	st_dev;		/* Device.  */
    unsigned long	st_ino;		/* File serial number.  */
    unsigned int	st_mode;	/* File mode.  */
    unsigned int	st_nlink;	/* Link count.  */
    unsigned int	st_uid;		/* User ID of the file's owner.  */
    unsigned int	st_gid;		/* Group ID of the file's group. */
    unsigned long	st_rdev;	/* Device number, if device.  */
    unsigned long	__pad1;
    long		st_size;	/* Size of file, in bytes.  */
    int		        st_blksize;	/* Optimal block size for I/O.  */
    int		        __pad2;
    long		st_blocks;	/* Number 512-byte blocks allocated. */
    struct timespec     st_atim;
    struct timespec     st_mtim;
    struct timespec     st_ctim;
    /*
    unsigned long  	st_atime;
    unsigned long  	__unused1;
    unsigned long  	st_mtime;
    unsigned long  	__unused2;
    unsigned long  	st_ctime;
    unsigned long  	__unused3;
    */
    unsigned int  	__unused4;
    unsigned int  	__unused5;
};

/* This matches struct stat64 in glibc2.1.
 */
struct kernel_stat64 {
    unsigned long long  st_dev;      /* Device.  */
    unsigned long long  st_ino;	     /* File serial number.  */
    unsigned int        st_mode;     /* File mode.  */
    unsigned int        st_nlink;    /* Link count.  */
    unsigned int        st_uid;	     /* User ID of the file's owner.  */
    unsigned int        st_gid;	     /* Group ID of the file's group. */
    unsigned long long  st_rdev;     /* Device number, if device.  */
    unsigned long long  __pad1;
    long long           st_size;     /* Size of file, in bytes.  */
    int                 st_blksize;  /* Optimal block size for I/O.  */
    int                 __pad2;
    long long           st_blocks;   /* Number 512-byte blocks allocated. */
    struct timespec     st_atim;
    struct timespec     st_mtim;
    struct timespec     st_ctim;
    unsigned int        __unused4;
    unsigned int        __unused5;
};
#endif
