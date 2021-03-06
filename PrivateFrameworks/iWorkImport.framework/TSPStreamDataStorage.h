/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPStreamDataStorage : NSObject <TSPDataStorage>

@property (nonatomic, readonly) unsigned int CRC;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <TSPCryptoInfo> *decryptionInfo;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *documentResourceLocator;
@property (nonatomic, readonly) unsigned long long encodedLength;
@property (nonatomic, readonly) TSUColor *fallbackColor;
@property (nonatomic) bool gilligan_isRemote;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isMissingData;
@property (nonatomic, readonly) bool isReadable;
@property (nonatomic, readonly) unsigned long long length;
@property (nonatomic, readonly) bool needsDownload;
@property (nonatomic, readonly) unsigned char packageIdentifier;
@property (nonatomic, readonly) NSString *packageLocator;
@property (nonatomic, readonly) bool readOnly;
@property (readonly) Class superclass;

- (id)AVAssetWithOptions:(id)arg1 forData:(id)arg2;
- (id)AVAssetWithOptions:(id)arg1 usingResourceLoaderForData:(id)arg2;
- (id)NSDataWithOptions:(unsigned long long)arg1;
- (bool)archiveInfoMessage:(struct DataInfo { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; unsigned long long x5; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x6; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x7; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x8; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x9; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x10; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x11; bool x12; int x13; struct DataAttributes {} *x14; struct EncryptionInfo {} *x15; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x16; }*)arg1 archiver:(id)arg2 packageWriter:(id)arg3;
- (id)documentResourceLocator;
- (unsigned long long)encodedLength;
- (id)filenameForPreferredFilename:(id)arg1;
- (bool)isInPackage:(id)arg1;
- (bool)isMissingData;
- (bool)isReadable;
- (unsigned long long)length;
- (struct CGDataProvider { }*)newCGDataProvider;
- (struct CGImageSource { }*)newCGImageSource;
- (unsigned char)packageIdentifier;
- (id)packageLocator;
- (void)performIOChannelReadWithAccessor:(id /* block */)arg1;
- (bool)readOnly;
- (id)writeData:(id)arg1 toPackageWriter:(id)arg2 infoMessage:(struct DataInfo { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; unsigned long long x5; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x6; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x7; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x8; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x9; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x10; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x11; bool x12; int x13; struct DataAttributes {} *x14; struct EncryptionInfo {} *x15; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x16; }*)arg3 preferredFilename:(id)arg4;

@end
