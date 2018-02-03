/* made by EzioChiu
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface __NSCFURLLocalStreamTaskWorkRead : __NSCFURLLocalStreamTaskWork {
    id /* block */  _completion;
    bool  _eof;
    unsigned long long  _maxBytes;
    unsigned long long  _minBytes;
    NSData * _readData;
}

- (void)dealloc;

@end
