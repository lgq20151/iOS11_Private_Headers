/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface _NSXPCConnectionExportInfo : NSObject {
    long long  _exportCount;
    NSXPCInterface * _exportedInterface;
    id  _exportedObject;
}

@property (nonatomic) long long exportCount;
@property (nonatomic, retain) NSXPCInterface *exportedInterface;
@property (nonatomic, retain) id exportedObject;

- (void)dealloc;
- (id)description;
- (long long)exportCount;
- (id)exportedInterface;
- (id)exportedObject;
- (id)init;
- (void)setExportCount:(long long)arg1;
- (void)setExportedInterface:(id)arg1;
- (void)setExportedObject:(id)arg1;

@end
