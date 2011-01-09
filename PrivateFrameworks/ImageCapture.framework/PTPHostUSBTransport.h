/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@class NSString, NSMutableData;



@interface PTPHostUSBTransport : PTPTransport 
{
    NSUInteger _locationID;
    unsigned short _vendorID;
    unsigned short _productID;
    NSString *_usbSerialNumberString;
    struct IOUSBInterfaceStruct300 {} **_interfaceInterfaceRef;
    unsigned char _bulkPipeIn;
    unsigned char _bulkPipeOut;
    unsigned char _interruptPipeIn;
    NSUInteger _readBufferSize;
    NSUInteger _writeBufferSize;
    NSUInteger _eventDataBufferSize;
    char *_readBuffer;
    char *_writeBuffer;
    char *_eventDataBuffer;
    NSMutableData *_eventData;
    unsigned char _headerBuffer[12];
    BOOL _headerBufferFound;
    NSInteger _maxPacketSizeBulkIn;
    NSInteger _maxPacketSizeBulkOut;
    NSInteger _maxPacketSizeInterruptIn;
    struct __CFRunLoopSource { } *_CFRunLoopSource;
    BOOL _delegateNeedsData;
    BOOL _delegateNeedsResponse;
    BOOL _connected;
    BOOL _busy;
    NSUInteger _canceledTransactionID;
}


- (void)stop;
- (BOOL)sendResponse:(id)arg1;
- (unsigned long)locationID;
- (void)setConnected:(BOOL)arg1;
- (void)sendDataPackets:(id)arg1;
- (BOOL)writeBulkData:(id)arg1;
- (NSInteger)readInterruptData;
- (void)dumpData:(void*)arg1 length:(NSInteger)arg2 comment:(id)arg3;
- (BOOL)handleBulkData:(unsigned long)arg1 result:(NSInteger)arg2;
- (void)handleInterruptData:(unsigned long)arg1;
- (void)clearPipeStall:(unsigned char)arg1;
- (void)clearBulkInPipeStall;
- (void)cancelTransaction:(id)arg1;
- (BOOL)connected;
- (id)initWithLocationID:(unsigned long)arg1 delegate:(id)arg2;
- (void)abortPendingIO;
- (BOOL)startInitiator;
- (unsigned short)vendorID;
- (unsigned short)productID;
- (id)usbSerialNumberString;
- (BOOL)sendCancel:(id)arg1;
- (unsigned short)cancelRequest:(id)arg1;
- (BOOL)sendRequest:(id)arg1 needsData:(BOOL)arg2;
- (NSInteger)readBulkDataWithTimeout:(unsigned long)arg1;
- (unsigned short)deviceStatus;
- (void)deviceReset;
- (id)description;
- (BOOL)sendEvent:(id)arg1;
- (void)dealloc;
- (BOOL)sendData:(id)arg1;

@end