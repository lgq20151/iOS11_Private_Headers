/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPNRAccessTrieReader : NSObject {
    NSData * _accessFile;
    struct _CFBurstTrie { } * _trie;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithFile:(id)arg1;
- (id)lookup:(id)arg1;

@end
