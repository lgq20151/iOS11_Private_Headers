/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
 */

@interface SinkContainer : NSObject <MapsSuggestionsSink> {
    unsigned long long  _hashValue;
    <MapsSuggestionsSink> * _weakSink;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniqueName;
@property (nonatomic) <MapsSuggestionsSink> *weakSink;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithSink:(id)arg1;
- (void)invalidateForMapsSuggestionsManager:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setWeakSink:(id)arg1;
- (struct NSString { Class x1; }*)uniqueName;
- (id)weakSink;

@end
