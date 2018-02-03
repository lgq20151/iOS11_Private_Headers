/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface _PFZipFileArchive : NSObject {
    NSMutableDictionary * _cachedContents;
    NSMutableArray * _centralDirectoryEntries;
    NSDictionary * _contents;
    NSData * _data;
    long long  _desc;
    PFZipEndOfCentralDirectoryRecord * _endRecord;
    NSMutableDictionary * _entryNameToCentralDirectoryFileHeader;
    NSMutableDictionary * _entryNameToData;
    NSMutableDictionary * _entryNameToLocalFileHeader;
    NSMutableArray * _localFileHeaders;
    NSArray * _names;
    NSString * _path;
    NSDictionary * _properties;
    id  _provider;
    void * _reserved;
    void * _reserved2;
    struct __zFlags { 
        unsigned int providerSuppliesContents : 1; 
        unsigned int providerSuppliesStreams : 1; 
        unsigned int providerSuppliesProperties : 1; 
        unsigned int noContentsCaching : 1; 
        unsigned int fileOpen : 1; 
        unsigned int reserved : 27; 
    }  _zFlags;
}

@property (nonatomic, readonly) NSArray *entryNames;

+ (id)createStringFromBytes:(const char *)arg1 offset:(unsigned long long*)arg2 length:(unsigned long long)arg3;
+ (unsigned short)readInt16FromBytes:(const char *)arg1 offset:(unsigned long long*)arg2;
+ (unsigned int)readInt32FromBytes:(const char *)arg1 offset:(unsigned long long*)arg2;
+ (void)writeInt16:(unsigned short)arg1 toData:(id)arg2;
+ (void)writeInt32:(unsigned int)arg1 toData:(id)arg2;
+ (void)writeInt64:(unsigned long long)arg1 toData:(id)arg2;

- (bool)addCentralDirectoryEndRecordWithBytes:(const char *)arg1 offset:(unsigned long long)arg2;
- (bool)addCentralDirectoryHeaderWithBytes:(const char *)arg1 offset:(unsigned long long)arg2;
- (bool)addLocalFileHeaderWithBytes:(const char *)arg1 offset:(unsigned long long)arg2;
- (id)archiveData;
- (id)archiveStream;
- (bool)compareBytes:(const char *)arg1 length:(unsigned int)arg2 withLocalFileHeader:(id)arg3;
- (id)contentsForEntryName:(id)arg1;
- (id)createDataForEntryName:(id)arg1 cache:(bool)arg2 error:(id*)arg3;
- (void)dealloc;
- (id)entryNames;
- (void)finalize;
- (id)init;
- (id)initWithData:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (id)initWithEntryNames:(id)arg1 contents:(id)arg2 properties:(id)arg3 options:(unsigned long long)arg4;
- (id)initWithEntryNames:(id)arg1 dataProvider:(id)arg2 options:(unsigned long long)arg3;
- (id)initWithPath:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (void)invalidate;
- (bool)isValid;
- (bool)load:(id*)arg1;
- (int)openArchiveFile:(id*)arg1;
- (id)propertiesForEntryName:(id)arg1;
- (bool)readDataForLocalFileHeader:(id)arg1 fromBytes:(const void*)arg2 error:(id*)arg3;
- (id)streamForEntryName:(id)arg1;
- (bool)writeContentsForEntryName:(id)arg1 toFile:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4;
- (bool)writeToFile:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;

@end
