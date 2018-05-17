//
// Generated file, do not edit! Created by nedtool 5.1 from src/routing/AODVQoSControlPackets.msg.
//

#if defined(__clang__)
#  pragma clang diagnostic ignored "-Wreserved-id-macro"
#endif
#ifndef __INET_AODVQOSCONTROLPACKETS_M_H
#define __INET_AODVQOSCONTROLPACKETS_M_H

#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0501
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif

// cplusplus {{
#include "inet/networklayer/common/L3Address.h"
// }}


namespace inet {

/**
 * Struct generated from src/routing/AODVQoSControlPackets.msg:31 by nedtool.
 */
struct UnreachableNode
{
    UnreachableNode();
    L3Address addr;
    unsigned int seqNum;
};

// helpers for local use
void __doPacking(omnetpp::cCommBuffer *b, const UnreachableNode& a);
void __doUnpacking(omnetpp::cCommBuffer *b, UnreachableNode& a);

inline void doParsimPacking(omnetpp::cCommBuffer *b, const UnreachableNode& obj) { __doPacking(b, obj); }
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, UnreachableNode& obj) { __doUnpacking(b, obj); }

/**
 * Enum generated from <tt>src/routing/AODVQoSControlPackets.msg:37</tt> by nedtool.
 * <pre>
 * enum AODVQoSControlPacketType
 * {
 * 
 *     RREQ = 1;
 *     RREP = 2;
 *     RERR = 3;
 *     RREPACK = 4;
 * }
 * </pre>
 */
enum AODVQoSControlPacketType {
    RREQ = 1,
    RREP = 2,
    RERR = 3,
    RREPACK = 4
};

/**
 * Class generated from <tt>src/routing/AODVQoSControlPackets.msg:48</tt> by nedtool.
 * <pre>
 * //
 * // Base packet for AODV Control Packets
 * //
 * packet AODVQoSControlPacket
 * {
 *     unsigned int packetType;
 * }
 * </pre>
 */
class AODVQoSControlPacket : public ::omnetpp::cPacket
{
  protected:
    unsigned int packetType;

  private:
    void copy(const AODVQoSControlPacket& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const AODVQoSControlPacket&);

  public:
    AODVQoSControlPacket(const char *name=nullptr, short kind=0);
    AODVQoSControlPacket(const AODVQoSControlPacket& other);
    virtual ~AODVQoSControlPacket();
    AODVQoSControlPacket& operator=(const AODVQoSControlPacket& other);
    virtual AODVQoSControlPacket *dup() const override {return new AODVQoSControlPacket(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual unsigned int getPacketType() const;
    virtual void setPacketType(unsigned int packetType);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const AODVQoSControlPacket& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, AODVQoSControlPacket& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>src/routing/AODVQoSControlPackets.msg:56</tt> by nedtool.
 * <pre>
 * //
 * // Represents an AODV Route Request
 * //
 * class AODVQoSRREQ extends AODVQoSControlPacket
 * {
 *     packetType = RREQ;
 *     bool joinFlag;
 *     bool repairFlag;
 *     bool gratuitousRREPFlag;
 *     bool destOnlyFlag;
 *     bool unknownSeqNumFlag;
 *     unsigned int hopCount;
 *     unsigned int rreqId;
 *     L3Address destAddr;
 *     unsigned int destSeqNum;
 *     L3Address originatorAddr;
 *     unsigned int originatorSeqNum;
 *     double minAvailableBandwidth;
 *     double minAvailableSlotTime;
 * }
 * </pre>
 */
class AODVQoSRREQ : public ::inet::AODVQoSControlPacket
{
  protected:
    bool joinFlag;
    bool repairFlag;
    bool gratuitousRREPFlag;
    bool destOnlyFlag;
    bool unknownSeqNumFlag;
    unsigned int hopCount;
    unsigned int rreqId;
    L3Address destAddr;
    unsigned int destSeqNum;
    L3Address originatorAddr;
    unsigned int originatorSeqNum;
    double minAvailableBandwidth;
    double minAvailableSlotTime;

  private:
    void copy(const AODVQoSRREQ& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const AODVQoSRREQ&);

  public:
    AODVQoSRREQ(const char *name=nullptr);
    AODVQoSRREQ(const AODVQoSRREQ& other);
    virtual ~AODVQoSRREQ();
    AODVQoSRREQ& operator=(const AODVQoSRREQ& other);
    virtual AODVQoSRREQ *dup() const override {return new AODVQoSRREQ(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual bool getJoinFlag() const;
    virtual void setJoinFlag(bool joinFlag);
    virtual bool getRepairFlag() const;
    virtual void setRepairFlag(bool repairFlag);
    virtual bool getGratuitousRREPFlag() const;
    virtual void setGratuitousRREPFlag(bool gratuitousRREPFlag);
    virtual bool getDestOnlyFlag() const;
    virtual void setDestOnlyFlag(bool destOnlyFlag);
    virtual bool getUnknownSeqNumFlag() const;
    virtual void setUnknownSeqNumFlag(bool unknownSeqNumFlag);
    virtual unsigned int getHopCount() const;
    virtual void setHopCount(unsigned int hopCount);
    virtual unsigned int getRreqId() const;
    virtual void setRreqId(unsigned int rreqId);
    virtual L3Address& getDestAddr();
    virtual const L3Address& getDestAddr() const {return const_cast<AODVQoSRREQ*>(this)->getDestAddr();}
    virtual void setDestAddr(const L3Address& destAddr);
    virtual unsigned int getDestSeqNum() const;
    virtual void setDestSeqNum(unsigned int destSeqNum);
    virtual L3Address& getOriginatorAddr();
    virtual const L3Address& getOriginatorAddr() const {return const_cast<AODVQoSRREQ*>(this)->getOriginatorAddr();}
    virtual void setOriginatorAddr(const L3Address& originatorAddr);
    virtual unsigned int getOriginatorSeqNum() const;
    virtual void setOriginatorSeqNum(unsigned int originatorSeqNum);
    virtual double getMinAvailableBandwidth() const;
    virtual void setMinAvailableBandwidth(double minAvailableBandwidth);
    virtual double getMinAvailableSlotTime() const;
    virtual void setMinAvailableSlotTime(double minAvailableSlotTime);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const AODVQoSRREQ& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, AODVQoSRREQ& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>src/routing/AODVQoSControlPackets.msg:77</tt> by nedtool.
 * <pre>
 * //
 * // Represents an AODV Route Reply
 * //
 * class AODVQoSRREP extends AODVQoSControlPacket
 * {
 *     packetType = RREP;
 *     bool repairFlag;
 *     bool ackRequiredFlag;
 *     unsigned int prefixSize;
 *     unsigned int hopCount;
 *     L3Address destAddr;
 *     unsigned int destSeqNum;
 *     L3Address originatorAddr;
 *     unsigned int originatorSeqNum;
 *     simtime_t lifeTime;
 * }
 * </pre>
 */
class AODVQoSRREP : public ::inet::AODVQoSControlPacket
{
  protected:
    bool repairFlag;
    bool ackRequiredFlag;
    unsigned int prefixSize;
    unsigned int hopCount;
    L3Address destAddr;
    unsigned int destSeqNum;
    L3Address originatorAddr;
    unsigned int originatorSeqNum;
    ::omnetpp::simtime_t lifeTime;

  private:
    void copy(const AODVQoSRREP& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const AODVQoSRREP&);

  public:
    AODVQoSRREP(const char *name=nullptr);
    AODVQoSRREP(const AODVQoSRREP& other);
    virtual ~AODVQoSRREP();
    AODVQoSRREP& operator=(const AODVQoSRREP& other);
    virtual AODVQoSRREP *dup() const override {return new AODVQoSRREP(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual bool getRepairFlag() const;
    virtual void setRepairFlag(bool repairFlag);
    virtual bool getAckRequiredFlag() const;
    virtual void setAckRequiredFlag(bool ackRequiredFlag);
    virtual unsigned int getPrefixSize() const;
    virtual void setPrefixSize(unsigned int prefixSize);
    virtual unsigned int getHopCount() const;
    virtual void setHopCount(unsigned int hopCount);
    virtual L3Address& getDestAddr();
    virtual const L3Address& getDestAddr() const {return const_cast<AODVQoSRREP*>(this)->getDestAddr();}
    virtual void setDestAddr(const L3Address& destAddr);
    virtual unsigned int getDestSeqNum() const;
    virtual void setDestSeqNum(unsigned int destSeqNum);
    virtual L3Address& getOriginatorAddr();
    virtual const L3Address& getOriginatorAddr() const {return const_cast<AODVQoSRREP*>(this)->getOriginatorAddr();}
    virtual void setOriginatorAddr(const L3Address& originatorAddr);
    virtual unsigned int getOriginatorSeqNum() const;
    virtual void setOriginatorSeqNum(unsigned int originatorSeqNum);
    virtual ::omnetpp::simtime_t getLifeTime() const;
    virtual void setLifeTime(::omnetpp::simtime_t lifeTime);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const AODVQoSRREP& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, AODVQoSRREP& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>src/routing/AODVQoSControlPackets.msg:94</tt> by nedtool.
 * <pre>
 * //
 * // Represents an AODV Route Error
 * //
 * class AODVQoSRERR extends AODVQoSControlPacket
 * {
 *     packetType = RERR;
 *     UnreachableNode unreachableNodes[];
 *     bool noDeleteFlag;
 *     unsigned int destCount;
 * }
 * </pre>
 */
class AODVQoSRERR : public ::inet::AODVQoSControlPacket
{
  protected:
    UnreachableNode *unreachableNodes; // array ptr
    unsigned int unreachableNodes_arraysize;
    bool noDeleteFlag;
    unsigned int destCount;

  private:
    void copy(const AODVQoSRERR& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const AODVQoSRERR&);

  public:
    AODVQoSRERR(const char *name=nullptr);
    AODVQoSRERR(const AODVQoSRERR& other);
    virtual ~AODVQoSRERR();
    AODVQoSRERR& operator=(const AODVQoSRERR& other);
    virtual AODVQoSRERR *dup() const override {return new AODVQoSRERR(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual void setUnreachableNodesArraySize(unsigned int size);
    virtual unsigned int getUnreachableNodesArraySize() const;
    virtual UnreachableNode& getUnreachableNodes(unsigned int k);
    virtual const UnreachableNode& getUnreachableNodes(unsigned int k) const {return const_cast<AODVQoSRERR*>(this)->getUnreachableNodes(k);}
    virtual void setUnreachableNodes(unsigned int k, const UnreachableNode& unreachableNodes);
    virtual bool getNoDeleteFlag() const;
    virtual void setNoDeleteFlag(bool noDeleteFlag);
    virtual unsigned int getDestCount() const;
    virtual void setDestCount(unsigned int destCount);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const AODVQoSRERR& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, AODVQoSRERR& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>src/routing/AODVQoSControlPackets.msg:105</tt> by nedtool.
 * <pre>
 * //
 * // Represents an AODV Route Reply ACK
 * //
 * class AODVQoSRREPACK extends AODVQoSControlPacket
 * {
 *     packetType = RREPACK;
 * }
 * </pre>
 */
class AODVQoSRREPACK : public ::inet::AODVQoSControlPacket
{
  protected:

  private:
    void copy(const AODVQoSRREPACK& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const AODVQoSRREPACK&);

  public:
    AODVQoSRREPACK(const char *name=nullptr);
    AODVQoSRREPACK(const AODVQoSRREPACK& other);
    virtual ~AODVQoSRREPACK();
    AODVQoSRREPACK& operator=(const AODVQoSRREPACK& other);
    virtual AODVQoSRREPACK *dup() const override {return new AODVQoSRREPACK(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const AODVQoSRREPACK& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, AODVQoSRREPACK& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>src/routing/AODVQoSControlPackets.msg:113</tt> by nedtool.
 * <pre>
 * //
 * // Represents a timer for a Route Reply packet
 * //
 * message WaitForRREP
 * {
 *     L3Address destAddr;
 *     unsigned int lastTTL;
 *     bool fromInvalidEntry;
 * }
 * </pre>
 */
class WaitForRREP : public ::omnetpp::cMessage
{
  protected:
    L3Address destAddr;
    unsigned int lastTTL;
    bool fromInvalidEntry;

  private:
    void copy(const WaitForRREP& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const WaitForRREP&);

  public:
    WaitForRREP(const char *name=nullptr, short kind=0);
    WaitForRREP(const WaitForRREP& other);
    virtual ~WaitForRREP();
    WaitForRREP& operator=(const WaitForRREP& other);
    virtual WaitForRREP *dup() const override {return new WaitForRREP(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual L3Address& getDestAddr();
    virtual const L3Address& getDestAddr() const {return const_cast<WaitForRREP*>(this)->getDestAddr();}
    virtual void setDestAddr(const L3Address& destAddr);
    virtual unsigned int getLastTTL() const;
    virtual void setLastTTL(unsigned int lastTTL);
    virtual bool getFromInvalidEntry() const;
    virtual void setFromInvalidEntry(bool fromInvalidEntry);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const WaitForRREP& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, WaitForRREP& obj) {obj.parsimUnpack(b);}

} // namespace inet

#endif // ifndef __INET_AODVQOSCONTROLPACKETS_M_H

