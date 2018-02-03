/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFZipEndOfCentralDirectoryRecord : NSObject {
    unsigned int  _byteSizeOfCentralDirectory;
    unsigned int  _centralDirectoryOffset;
    NSString * _comment;
    unsigned short  _commentLength;
    unsigned short  _diskWhereCentralDirectoryStarts;
    unsigned short  _numberOfCentralDirectoryRecordsOnThisDisk;
    unsigned short  _numberOfDisk;
    unsigned short  _totalNumberOfCentralDirectoryRecords;
}

@property (nonatomic) unsigned int byteSizeOfCentralDirectory;
@property (nonatomic) unsigned int centralDirectoryOffset;
@property (nonatomic, retain) NSString *comment;
@property (nonatomic, readonly) unsigned short commentLength;
@property (nonatomic) unsigned short diskWhereCentralDirectoryStarts;
@property (nonatomic) unsigned short numberOfCentralDirectoryRecordsOnThisDisk;
@property (nonatomic) unsigned short numberOfDisk;
@property (nonatomic) unsigned short totalNumberOfCentralDirectoryRecords;

- (void)appendToData:(id)arg1;
- (unsigned int)byteSizeOfCentralDirectory;
- (unsigned int)centralDirectoryOffset;
- (id)comment;
- (unsigned short)commentLength;
- (void)dealloc;
- (id)description;
- (unsigned short)diskWhereCentralDirectoryStarts;
- (id)init;
- (unsigned long long)loadFromBytes:(const char *)arg1 offset:(unsigned long long)arg2;
- (unsigned long long)loadFromData:(id)arg1 offset:(unsigned long long)arg2;
- (unsigned short)numberOfCentralDirectoryRecordsOnThisDisk;
- (unsigned short)numberOfDisk;
- (void)setByteSizeOfCentralDirectory:(unsigned int)arg1;
- (void)setCentralDirectoryOffset:(unsigned int)arg1;
- (void)setComment:(id)arg1;
- (void)setDiskWhereCentralDirectoryStarts:(unsigned short)arg1;
- (void)setNumberOfCentralDirectoryRecordsOnThisDisk:(unsigned short)arg1;
- (void)setNumberOfDisk:(unsigned short)arg1;
- (void)setTotalNumberOfCentralDirectoryRecords:(unsigned short)arg1;
- (unsigned short)totalNumberOfCentralDirectoryRecords;

@end
